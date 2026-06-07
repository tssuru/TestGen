try:
    a,b,c=3,9,8
    def g(a):
        a=1
        b+=3
        c=5
        return a+b+c
    
    a,b,c=0,4,5
    print(g(a),a,b,c)
    
except: print('error')
