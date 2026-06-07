try:
    a,b,c=7,4,8
    def g(b):
        global c
        a=5
        b*=2
        c=4
        return a+b+c
    
    a,b,c=5,2,6
    print(g(a),a,b,c)
    
except: print('error')
