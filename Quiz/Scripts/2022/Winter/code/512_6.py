try:
    a,b,c=2,5,1
    def g(a):
        global c
        a=3
        b-=2
        c=5
        return a+b+c
    
    a,b,c=4,9,7
    print(g(a),a,b,c)
    
except: print('error')
