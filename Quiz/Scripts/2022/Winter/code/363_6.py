try:
    a,b,c=6,9,0
    def g(a):
        global c
        a=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=5,4,8
    print(g(a),a,b,c)
    
except: print('error')
