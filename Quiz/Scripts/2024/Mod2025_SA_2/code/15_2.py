try:
    a,b,c=9,2,4
    def h(a):
        global c
        a=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,1,5
    print(h(a),a,b,c)
except: print('error')
