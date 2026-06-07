try:
    a,b,c=6,8,9
    def g(a):
        a=1
        b-=2
        c=5
        return a+b+c
    
    a,b,c=2,5,1
    print(g(a),a,b,c)
    
except: print('error')
