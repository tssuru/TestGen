try:
    a,b,c=5,8,0
    def g(b):
        a=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,6,2
    print(g(a),a,b,c)
    
except: print('error')
