try:
    a,b,c=1,6,7
    def g(b):
        global c
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=2,4,9
    print(g(a),a,b,c)
    
except: print('error')
