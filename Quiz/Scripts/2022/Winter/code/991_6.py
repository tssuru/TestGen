try:
    a,b,c=6,1,8
    def g(b):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,4,1
    print(g(a),a,b,c)
    
except: print('error')
