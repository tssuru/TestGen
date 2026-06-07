try:
    a,b,c=5,2,4
    def h(a):
        global c
        a*=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=9,3,2
    print(h(a),a,b,c)
    
except: print('error')
