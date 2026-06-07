try:
    a,b,c=5,9,7
    def g(b):
        global c
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=0,8,4
    print(g(a),a,b,c)
    
except: print('error')
