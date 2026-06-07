try:
    a,b,c=7,2,4
    def h(a):
        global c
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=6,5,1
    print(h(a),a,b,c)
    
except: print('error')
