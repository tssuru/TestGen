try:
    a,b,c=5,0,1
    def g(b):
        a=2
        b*=5
        c=1
        return a+b+c
    
    a,b,c=2,6,3
    print(g(a),a,b,c)
    
except: print('error')
