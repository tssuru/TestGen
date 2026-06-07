try:
    a,b,c=1,0,2
    def h(a):
        global c
        a=5
        b*=4
        c=2
        return a+b+c
    
    a,b,c=7,5,4
    print(h(a),a,b,c)
    
except: print('error')
