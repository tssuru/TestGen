try:
    a,b,c=5,4,9
    def g(a):
        a=5
        b+=2
        c=1
        return a+b+c
    
    a,b,c=0,3,8
    print(g(a),a,b,c)
    
except: print('error')
