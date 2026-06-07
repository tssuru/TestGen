try:
    a,b,c=4,8,2
    def g(b):
        global c
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,0,6
    print(g(a),a,b,c)
    
except: print('error')
