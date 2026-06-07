try:
    a,b,c=3,2,0
    def g(b):
        global c
        a=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,9,6
    print(g(a),a,b,c)
    
except: print('error')
