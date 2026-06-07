try:
    a,b,c=7,3,0
    def g(b):
        global c
        a=2
        b*=5
        c=4
        return a+b+c
    
    a,b,c=2,9,1
    print(g(a),a,b,c)
    
except: print('error')
