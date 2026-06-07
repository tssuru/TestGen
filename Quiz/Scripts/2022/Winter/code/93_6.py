try:
    a,b,c=8,4,1
    def g(b):
        a-=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,3,5
    print(g(a),a,b,c)
    
except: print('error')
