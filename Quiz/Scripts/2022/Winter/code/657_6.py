try:
    a,b,c=7,4,6
    def g(a):
        global c
        a=4
        b=4
        c=5
        return a+b+c
    
    a,b,c=3,2,9
    print(g(a),a,b,c)
    
except: print('error')
