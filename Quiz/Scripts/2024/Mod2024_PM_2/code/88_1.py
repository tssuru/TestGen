try:
    a,b,c=5,8,0
    def g(b):
        a=5
        b*=2
        c=3
        return a+b+c
    
    a,b,c=3,6,4
    print(g(a),a,b,c)
    
except: print('error')
