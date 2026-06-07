try:
    a,b,c=6,2,9
    def g(a):
        global c
        a=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,5,8
    print(g(a),a,b,c)
    
except: print('error')
