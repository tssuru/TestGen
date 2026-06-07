try:
    a,b,c=5,0,9
    def h(a):
        global c
        a=5
        b-=3
        c=2
        return a+b+c
    
    a,b,c=7,0,5
    print(h(a),a,b,c)
    
except: print('error')
