try:
    a,b,c=5,1,2
    def h(b):
        a=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,4,0
    print(h(a),a,b,c)
    
except: print('error')
