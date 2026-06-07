try:
    a,b,c=3,5,9
    def g(a):
        global c
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,1,8
    print(g(a),a,b,c)
    
except: print('error')
