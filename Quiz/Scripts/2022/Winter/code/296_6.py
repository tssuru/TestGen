try:
    a,b,c=7,9,6
    def g(b):
        global c
        a=1
        b-=5
        c=2
        return a+b+c
    
    a,b,c=0,1,5
    print(g(a),a,b,c)
    
except: print('error')
