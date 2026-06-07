try:
    a,b,c=3,4,1
    def g(a):
        a-=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,5,8
    print(g(a),a,b,c)
    
except: print('error')
