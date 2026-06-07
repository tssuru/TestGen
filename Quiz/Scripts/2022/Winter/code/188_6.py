try:
    a,b,c=3,9,6
    def g(b):
        a=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=7,6,8
    print(g(a),a,b,c)
    
except: print('error')
