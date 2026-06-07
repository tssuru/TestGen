try:
    a,b,c=8,0,9
    def g(b):
        global c
        a=1
        b*=4
        c=1
        return a+b+c
    
    a,b,c=1,3,5
    print(g(a),a,b,c)
    
except: print('error')
