try:
    a,b,c=1,8,9
    def h(a):
        a=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=4,9,4
    print(h(a),a,b,c)
    
except: print('error')
