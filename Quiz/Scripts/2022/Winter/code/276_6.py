try:
    a,b,c=6,0,4
    def h(a):
        global c
        a=3
        b*=2
        c=4
        return a+b+c
    
    a,b,c=5,1,2
    print(h(a),a,b,c)
    
except: print('error')
