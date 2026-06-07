try:
    a,b,c=3,7,2
    def h(a):
        global c
        a=2
        b-=5
        c=1
        return a+b+c
    
    a,b,c=9,0,6
    print(h(a),a,b,c)
    
except: print('error')
