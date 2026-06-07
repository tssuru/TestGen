try:
    a,b,c=9,8,0
    def g(b):
        a=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=2,1,4
    print(g(a),a,b,c)
    
except: print('error')
