try:
    a,b,c=5,0,1
    def h(a):
        global c
        a=5
        b+=2
        c=3
        return a+b+c
    
    a,b,c=3,4,0
    print(h(a),a,b,c)
    
except: print('error')
