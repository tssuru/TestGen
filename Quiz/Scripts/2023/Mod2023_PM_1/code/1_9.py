try:
    a,b,c=2,3,1
    def g(b):
        a+=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=6,8,0
    print(g(a),a,b,c)
    
except: print('error')
