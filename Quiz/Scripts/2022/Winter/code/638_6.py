try:
    a,b,c=4,2,3
    def h(a):
        global c
        a-=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=2,9,4
    print(h(a),a,b,c)
    
except: print('error')
