try:
    a,b,c=8,6,5
    def g(b):
        a=5
        b-=3
        c=1
        return a+b+c
    
    a,b,c=3,4,1
    print(g(a),a,b,c)
    
except: print('error')
