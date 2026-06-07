try:
    a,b,c=2,3,1
    def g(a):
        global c
        a+=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=0,6,9
    print(g(a),a,b,c)
except: print('error')
