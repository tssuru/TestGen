try:
    a,b,c=2,3,1
    def h(b):
        a=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=8,7,4
    print(h(a),a,b,c)
    
except: print('error')
