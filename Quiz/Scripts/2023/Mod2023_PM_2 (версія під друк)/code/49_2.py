try:
    a,b,c=7,9,3
    def h(a):
        global c
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=2,4,5
    print(h(a),a,b,c)
    
except: print('error')
