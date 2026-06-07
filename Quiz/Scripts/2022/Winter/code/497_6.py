try:
    a,b,c=7,3,6
    def h(b):
        a=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=8,2,0
    print(h(a),a,b,c)
    
except: print('error')
