try:
    a,b,c=1,6,2
    def h(a):
        global c
        a=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=3,9,5
    print(h(a),a,b,c)
    
except: print('error')
