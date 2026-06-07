try:
    a,b,c=6,1,7
    def g(b):
        global c
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=9,8,1
    print(g(a),a,b,c)
    
except: print('error')
