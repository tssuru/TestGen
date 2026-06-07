try:
    a,b,c=3,9,1
    def g(a):
        a-=4
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,3,7
    print(g(a),a,b,c)
    
except: print('error')
