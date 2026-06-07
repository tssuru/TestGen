try:
    a,b,c=4,2,4
    def g(a):
        a=5
        b*=4
        c=3
        return a+b+c
    
    a,b,c=9,1,8
    print(g(a),a,b,c)
    
except: print('error')
