try:
    a,b,c=3,5,2
    def g(a):
        global c
        a=1
        b*=4
        c=2
        return a+b+c
    
    a,b,c=1,7,4
    print(g(a),a,b,c)
    
except: print('error')
