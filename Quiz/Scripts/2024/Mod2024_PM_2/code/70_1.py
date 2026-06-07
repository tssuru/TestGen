try:
    a,b,c=2,6,5
    def g(b):
        global c
        a=4
        b*=3
        c=1
        return a+b+c
    
    a,b,c=7,9,3
    print(g(a),a,b,c)
    
except: print('error')
