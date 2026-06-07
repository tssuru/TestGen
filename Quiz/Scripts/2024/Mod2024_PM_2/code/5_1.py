try:
    a,b,c=4,8,9
    def g(a):
        global c
        a=5
        b+=3
        c=5
        return a+b+c
    
    a,b,c=6,2,3
    print(g(a),a,b,c)
    
except: print('error')
