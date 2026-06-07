try:
    a,b,c=5,8,1
    def g(a):
        a=5
        b-=1
        c=4
        return a+b+c
    
    a,b,c=6,2,4
    print(g(a),a,b,c)
    
except: print('error')
