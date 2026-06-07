try:
    a,b,c=5,9,4
    def g(b):
        a=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=1,2,8
    print(g(a),a,b,c)
    
except: print('error')
