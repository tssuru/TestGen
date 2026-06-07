try:
    a,b,c=3,9,5
    def h(a):
        global c
        a*=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=7,1,4
    print(h(a),a,b,c)
    
except: print('error')
