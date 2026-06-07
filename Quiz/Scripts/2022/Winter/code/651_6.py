try:
    a,b,c=2,7,4
    def h(a):
        global c
        a=5
        b+=2
        c=4
        return a+b+c
    
    a,b,c=6,8,9
    print(h(a),a,b,c)
    
except: print('error')
