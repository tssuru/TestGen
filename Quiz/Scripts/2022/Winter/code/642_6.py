try:
    a,b,c=7,9,0
    def h(a):
        global c
        a-=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=3,7,6
    print(h(a),a,b,c)
    
except: print('error')
