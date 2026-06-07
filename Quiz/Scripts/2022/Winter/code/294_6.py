try:
    a,b,c=3,5,6
    def g(a):
        global c
        a=3
        b-=4
        c=1
        return a+b+c
    
    a,b,c=9,1,2
    print(g(a),a,b,c)
    
except: print('error')
