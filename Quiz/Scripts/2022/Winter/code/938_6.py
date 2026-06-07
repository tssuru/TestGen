try:
    a,b,c=1,0,1
    def h(a):
        global c
        a*=2
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,2,9
    print(h(a),a,b,c)
    
except: print('error')
