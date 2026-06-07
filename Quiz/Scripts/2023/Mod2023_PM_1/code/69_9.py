try:
    a,b,c=2,8,9
    def g(b):
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,6,4
    print(g(a),a,b,c)
    
except: print('error')
